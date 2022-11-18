// Object: UIItemDescriptionAsset
// ClassId: 887
// RuntimeId: 64197
// TypeInfo: 0x0000000144D9A090
#include "../Core/Asset.h"
#include "../CasablancaShared/UIItemDescriptionAsset.h"
#include "../CasablancaShared/UIItemDescription.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIItemDescriptionAsset : public Core::Asset {
        Array<CasablancaShared::UIItemDescriptionAsset> Children; // 0x20
        Array<CasablancaShared::UIItemDescription> Items; // 0x28
    }; // 0x30
    static_assert(sizeof(UIItemDescriptionAsset) == 0x30);
}
#pragma pack(pop)