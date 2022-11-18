// Object: AchievementDataAsset
// ClassId: 139
// RuntimeId: 24561
// TypeInfo: 0x0000000144D6D2B0
#include "../Core/Asset.h"
#include "../UI/LocalizedStringBase.h"
#include "../Render/TextureAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AchievementDataAsset : public Core::Asset {
        UI::LocalizedStringBase TitleStringId; // 0x20
        UI::LocalizedStringBase PlatinumTitleStringId; // 0x28
        UI::LocalizedStringBase PlatinumDescriptionStringId; // 0x30
        Render::TextureAsset PlatinumIcon; // 0x38
    }; // 0x40
    static_assert(sizeof(AchievementDataAsset) == 0x40);
}
#pragma pack(pop)