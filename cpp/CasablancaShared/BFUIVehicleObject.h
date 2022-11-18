// Object: BFUIVehicleObject
// ClassId: 1264
// RuntimeId: 8618
// TypeInfo: 0x0000000144D3EEE0
#include "../Core/DataContainer.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleObject : public Core::DataContainer {
        Uint64 UniqueId; // 0x18
        char pad_0x20[0x8];
    }; // 0x28
    static_assert(sizeof(BFUIVehicleObject) == 0x28);
}
#pragma pack(pop)