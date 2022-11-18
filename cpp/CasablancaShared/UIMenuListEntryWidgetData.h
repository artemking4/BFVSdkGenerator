// Object: UIMenuListEntryWidgetData
// ClassId: 3822
// RuntimeId: 17897
// TypeInfo: 0x0000000144D9AD90
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec2.h"
#include "../CasablancaShared/BFUIMenuListEntrySoundStyle.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIMenuListEntryWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Core::LinearTransform WorldTransform; // 0x80
        Float32 ExtraSelectionWidth; // 0xC0
        Core::Vec2 Position; // 0xC4
        char pad_0xCC[0x4];
        CasablancaShared::BFUIMenuListEntrySoundStyle SoundStyle; // 0xD0
        Boolean Enabled; // 0xD8
        char pad_0xD9[0x7];
    }; // 0xE0
    static_assert(sizeof(UIMenuListEntryWidgetData) == 0xE0);
}
#pragma pack(pop)