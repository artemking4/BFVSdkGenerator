// Object: WaypointData
// ClassId: 5646
// RuntimeId: 20277
// TypeInfo: 0x0000000144EABD80
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace PathfindingShared {
    class WaypointData : public Core::DataContainer {
        Int32 SchematicsNameHash; // 0x18
        Uint32 WaypointId; // 0x1C
        Boolean UseClientsPosition; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(WaypointData) == 0x28);
}
#pragma pack(pop)