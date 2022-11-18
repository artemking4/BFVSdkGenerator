// Object: BFUIListWidgetData
// ClassId: 3798
// RuntimeId: 21958
// TypeInfo: 0x0000000144D97490
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIWidgetBlueprint.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/BFUIDeepLinkTargetAsset.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIListWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Core::DataContainer DataInput; // 0x80
        CasablancaShared::BFUIWidgetBlueprint CellWidget; // 0x88
        Uint32 MaxRows; // 0x90
        Int32 SelectionInput; // 0x94
        CasablancaShared::BFUIDeepLinkTargetAsset NavigationState; // 0x98
        Float32 XOffset; // 0xA0
        Float32 YOffset; // 0xA4
        Boolean RenderFirstInWidget; // 0xA8
        Boolean AutoSetSelectionOnInit; // 0xA9
        Boolean ValidateSetSelection; // 0xAA
        Boolean WrapSelection; // 0xAB
        Boolean RestoreNavigationState; // 0xAC
        Boolean AutoSizeWidgetHorizontally; // 0xAD
        Boolean AutoSizeWidgetVertically; // 0xAE
        Boolean Enabled; // 0xAF
        Boolean ScrollIntoView; // 0xB0
        char pad_0xB1[0xF];
    }; // 0xC0
    static_assert(sizeof(BFUIListWidgetData) == 0xC0);
}
#pragma pack(pop)