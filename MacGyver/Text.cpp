#include "Text.h"
#include "TextRenderer.h"
#include "UIRenderableData.h"
void Macgyver::Components::UI::Text::update(Gameobjects::Component* self, unsigned int deltaTime)
{
	TextData* data = componentGetData(self, TextData);
	if (data->INTERNAL_cachedPtSize != data->ptSize ||
		data->INTERNAL_cachedFont != data->font ||
		data->INTERNAL_cachedText != data->text) {

		UIRenderableData* renderData = componentGetData(self, UIRenderableData);

		SDL_DestroyTexture(renderData->texture);

		renderData->texture = 
			getTextRenderer.displayText
		(
			self->getWorldScene()->scene_RENDERER,
			data->font, data->text, &data->textBoundries, {255,255,255}, data->ptSize
		);
		//UPDATE INTERNAL DATA STRUCTS
		data->INTERNAL_cachedFont = data->font;
		data->INTERNAL_cachedPtSize = data->ptSize;
		data->INTERNAL_cachedText = data->text;
	}

	
}

void Macgyver::Components::UI::Text::attachNew(Gameobjects::Component* comp,
	std::string font, std::string text,
	unsigned int ptSize, SDL_Rect size)
{
	
	comp->setComponentProperties(UI_RENDERABLE);
	comp->update = Text::update;

	comp->addData(
		componentCreateData(TextData,
			comp->getWorldScene()->scene_RENDERER,
			text, font, ptSize, size)
	);

	SDL_Texture* textRender = getTextRenderer.displayText(
		comp->getWorldScene()->scene_RENDERER, font, text, &size, {255,255,255}, ptSize
	);
	UIRenderableData* renderableData = new UIRenderableData(textRender, size.w, size.h);
	renderableData->rect.x = size.x;
	renderableData->rect.y = size.y;
	comp->addData(
		(ComponentData*)renderableData, typeHash(UIRenderableData)
	);

}

Macgyver::Components::UI::TextData::TextData(SDL_Renderer* renderer ,
	std::string txt, std::string fnt, unsigned int ptSize, 
	SDL_Rect rect)
{
	this->text = this->INTERNAL_cachedText = txt;
	this->font = this->INTERNAL_cachedFont = fnt;
	this->ptSize = this->INTERNAL_cachedPtSize = ptSize;
	this->textBoundries = rect;
}
