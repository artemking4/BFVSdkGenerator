// Object: BFUIElementEditBoxEntityData
// ClassId: 3681
// RuntimeId: 62421
// TypeInfo: 0x0000000144D9D410
#include "../CasablancaShared/BFUITypingInputListenerElementEntityData.h"
#include "../CasablancaShared/BFUITextStyle.h"
#include "../GameShared/UIElementAlignment.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec2.h"
#include "../GameShared/UIBlendMode.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementEditBoxEntityData : public CasablancaShared::BFUITypingInputListenerElementEntityData {
        Core::Vec3 TextColor; // 0x160
        Core::Vec3 SelectionColor; // 0x170
        Core::Vec3 CursorColor; // 0x180
        CasablancaShared::BFUITextStyle TextStyle; // 0x190
        GameShared::UIElementAlignment HorizonalAlignment; // 0x1A0
        GameShared::UIElementAlignment VerticalAlignment; // 0x1A4
        Float32 CursorWidth; // 0x1A8
        Core::Vec2 CursorOffset; // 0x1AC
        GameShared::UIBlendMode BlendMode; // 0x1B4
        Float32 TextAlpha; // 0x1B8
        Float32 SelectionAlpha; // 0x1BC
        Float32 CursorAlpha; // 0x1C0
        Boolean Wordwrap; // 0x1C4
        Boolean UseColorAsOverlayOnText; // 0x1C5
        Boolean OverrideBlendMode; // 0x1C6
        char pad_0x1C7[0x9];
    }; // 0x1D0
    static_assert(sizeof(BFUIElementEditBoxEntityData) == 0x1D0);
}
#pragma pack(pop)