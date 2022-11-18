// Object: OnlineRichPresenceLevelDescriptionComponent
// ClassId: 4217
// RuntimeId: 51824
// TypeInfo: 0x0000000144F03390
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Online/OnlineRichPresenceString.h"
#include "../Online/OnlineRichPresenceContextValuePair.h"

#pragma pack(push, 8)
namespace Online {
    class OnlineRichPresenceLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        Online::OnlineRichPresenceString RichPresenceString; // 0x18
        Array<Online::OnlineRichPresenceContextValuePair> Contexts; // 0x20
    }; // 0x28
    static_assert(sizeof(OnlineRichPresenceLevelDescriptionComponent) == 0x28);
}
#pragma pack(pop)