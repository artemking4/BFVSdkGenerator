// Object: UIResourceTable
// ClassId: 893
// RuntimeId: 48364
// TypeInfo: 0x0000000144EB3D30
#include "../Core/Asset.h"
#include "../UI/UIResourceTableEntry.h"

#pragma pack(push, 8)
namespace UI {
    class UIResourceTable : public Core::Asset {
        Array<UI::UIResourceTableEntry> Entries; // 0x20
    }; // 0x28
    static_assert(sizeof(UIResourceTable) == 0x28);
}
#pragma pack(pop)