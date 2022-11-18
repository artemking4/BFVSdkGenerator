// Object: UIMapAreaList
// ClassId: 5465
// RuntimeId: 20629
// TypeInfo: 0x0000000144D5F6E0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIMapAreaObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMapAreaList : public Core::DataContainer {
        Array<CasablancaShared::UIMapAreaObject> MapAreas; // 0x18
    }; // 0x20
    static_assert(sizeof(UIMapAreaList) == 0x20);
}
#pragma pack(pop)