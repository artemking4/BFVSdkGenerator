// Object: LocalizationAsset
// ClassId: 547
// RuntimeId: 26675
// TypeInfo: 0x0000000144EB3DB0
#include "../Core/Asset.h"
#include "../UI/UITextDatabase.h"

#pragma pack(push, 8)
namespace UI {
    class LocalizationAsset : public Core::Asset {
        Array<UI::UITextDatabase> LocalizedTexts; // 0x20
    }; // 0x28
    static_assert(sizeof(LocalizationAsset) == 0x28);
}
#pragma pack(pop)