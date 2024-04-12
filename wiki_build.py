import os,glob
import subprocess

subprocess.run([f"C:\\Program Files\\doxygen\\bin\\Doxygen", "Doxyfile"],shell=True)
#subprocess.run("echo hello world",shell=True)

original_cwd = os.getcwd()
os.chdir(original_cwd + "/docs/latex")

files = []
for file in glob.glob("*.tex"):
    files.append(file.split(".tex")[0])

#print(files)
for file in files:
    subprocess.run(
        
        ["pandoc", "-s", "-t", "gfm", "-o", 
         original_cwd+"/wiki/"+( file[1:] if file[0] == "_" else file)+".md",
         original_cwd + "/docs/latex/"+file+".tex"])
