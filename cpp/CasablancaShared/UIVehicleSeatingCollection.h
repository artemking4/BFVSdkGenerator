// Object: UIVehicleSeatingCollection
// ClassId: 5544
// RuntimeId: 43744
// TypeInfo: 0x0000000144D41150
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIVehicleSeatingEntry.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIVehicleSeatingCollection : public Core::DataContainer {
        Array<CasablancaShared::UIVehicleSeatingEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(UIVehicleSeatingCollection) == 0x20);
}
#pragma pack(pop)