#pragma once

#include "../../../spritesheet.h"

namespace Impacto {
namespace Profile {
namespace CHLCC {
namespace MusicMenu {

int const Endings = 8;
int const MusicTrackCount = 45;

extern float MenuTransitionDuration;
extern uint32_t BackgroundColor;
extern Sprite CircleSprite;
extern glm::vec2 CircleStartPosition;
extern float CircleOffset;
extern glm::vec2 ErinPosition;
extern Sprite ErinSprite;
extern Sprite BackgroundFilter;
extern glm::vec2 InitialRedBarPosition;
extern Sprite InitialRedBarSprite;
extern glm::vec2 RightRedBarPosition;
extern glm::vec2 RedBarPosition;
extern float RedBarDivision;
extern float RedBarBaseX;
extern Sprite RedBarSprite;
extern glm::vec2 RedBarLabelPosition;
extern Sprite RedBarLabel;
extern float TitleFadeInDuration;
extern float TitleFadeOutDuration;
extern Sprite TrackTree;
extern glm::vec2 TrackTreePos;
extern glm::vec2 TrackButtonPosTemplate;
extern glm::vec2 TrackNameOffset;
extern glm::vec2 ArtistOffset;
extern glm::vec2 TrackOffset;
extern Sprite TrackHighlight;
extern int Playlist[MusicTrackCount];

void Configure();

}  // namespace MusicMenu
}  // namespace CHLCC
}  // namespace Profile
}  // namespace Impacto