// Object: FuelComponentData
// ClassId: 1781
// RuntimeId: 33169
// TypeInfo: 0x0000000144DE7E90
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Core/AudioCurve.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class FuelComponentData : public Entity::GameComponentData {
        Float32 InitialFuel; // 0x80
        Float32 MaxFuel; // 0x84
        Float32 RPM; // 0x88
        char pad_0x8C[0x4];
        Core::AudioCurve FuelConsumptionCurve; // 0x90
    }; // 0xA0
    static_assert(sizeof(FuelComponentData) == 0xA0);
}
#pragma pack(pop)