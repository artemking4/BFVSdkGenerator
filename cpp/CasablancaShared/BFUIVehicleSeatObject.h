// Object: BFUIVehicleSeatObject
// ClassId: 1269
// RuntimeId: 766
// TypeInfo: 0x0000000144D3EE60
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleSeatObject : public Core::DataContainer {
        Boolean EmptyClassDummyProperty; // 0x18
        char pad_0x19[0x17];
    }; // 0x30
    static_assert(sizeof(BFUIVehicleSeatObject) == 0x30);
}
#pragma pack(pop)