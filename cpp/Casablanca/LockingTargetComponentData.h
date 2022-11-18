// Object: LockingTargetComponentData
// ClassId: 1800
// RuntimeId: 297
// TypeInfo: 0x0000000144C7EA00
#include "../Entity/GameComponentData.h"
#include "../Casablanca/SmokeJammingData.h"
#include "../Casablanca/AirMissileJammingData.h"
#include "../GameShared/VehicleLockableInfoData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class LockingTargetComponentData : public Entity::GameComponentData {
        Casablanca::SmokeJammingData SmokeJamming; // 0x80
        Casablanca::AirMissileJammingData AirMissileJamming; // 0x94
        GameShared::VehicleLockableInfoData VehicleLockableInfo; // 0xC4
        Float32 LockingTimeMultiplier; // 0xD4
        Float32 HighAltitudeLockHeight; // 0xD8
        Boolean IsLockable; // 0xDC
        Boolean UseLowAltitudeHeatSignature; // 0xDD
        char pad_0xDE[0x2];
    }; // 0xE0
    static_assert(sizeof(LockingTargetComponentData) == 0xE0);
}
#pragma pack(pop)