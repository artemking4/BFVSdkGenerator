// Object: SpecializationItemInfo
// ClassId: 4897
// RuntimeId: 62343
// TypeInfo: 0x0000000144D50C50
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UISpecializationItemStatus.h"
#include "../CasablancaShared/BFUISpecTreeItemInstanceObject.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpecializationItemInfo : public Core::DataContainer {
        CasablancaShared::UISpecializationItemStatus Status; // 0x18
        char pad_0x1C[0x4];
        CasablancaShared::BFUISpecTreeItemInstanceObject SpecTreeItem; // 0x20
        Array<Int32> ParentIndices; // 0x28
    }; // 0x30
    static_assert(sizeof(SpecializationItemInfo) == 0x30);
}
#pragma pack(pop)