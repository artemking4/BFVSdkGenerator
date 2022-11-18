// Object: DiceShooterSurfacePropertySoundData
// ClassId: 4253
// RuntimeId: 3390
// TypeInfo: 0x0000000144DE8A10
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../DiceShooterShared/WheelSurfaceWaveData.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class DiceShooterSurfacePropertySoundData : public Entity::PhysicsMaterialRelationPropertyData {
        DiceShooterShared::WheelSurfaceWaveData WheelSurfaceWaves; // 0x20
    }; // 0x58
    static_assert(sizeof(DiceShooterSurfacePropertySoundData) == 0x58);
}
#pragma pack(pop)