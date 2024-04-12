import os,glob
import subprocess

#subprocess.run([f"C:\\Program Files\\doxygen\\bin\\Doxygen", "Doxyfile"],shell=True)
#subprocess.run("echo hello world",shell=True)

original_cwd = os.getcwd()
os.chdir(original_cwd + "/docs/html")

files = []
for file in glob.glob("*.html"):
    files.append(file.split(".html")[0])

#print(files)
for file in files:
    subprocess.run(
        
        ["pandoc", "-s","-f","html" ,"-t", "gfm", "-o", 
         original_cwd+"/wiki/"+( file[1:] if file[0] == "_" else file)+".md",
         original_cwd + "/docs/html/"+file+".html"])
    print(f"generated {file}")