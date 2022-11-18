// Object: BFSoldierSpawnEntityData
// ClassId: 3978
// RuntimeId: 21237
// TypeInfo: 0x0000000144D31020
#include "../GameShared/CharacterSpawnReferenceObjectData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFSoldierSpawnEntityData : public GameShared::CharacterSpawnReferenceObjectData {
        Float32 ReservationTime; // 0x1E0
        Boolean Reservable; // 0x1E4
        Boolean AcquireVehicleOwnershipOnSpawn; // 0x1E5
        char pad_0x1E6[0xA];
    }; // 0x1F0
    static_assert(sizeof(BFSoldierSpawnEntityData) == 0x1F0);
}
#pragma pack(pop)