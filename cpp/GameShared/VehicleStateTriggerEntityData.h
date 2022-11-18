// Object: VehicleStateTriggerEntityData
// ClassId: 3472
// RuntimeId: 11542
// TypeInfo: 0x0000000144E8EC60
#include "../GameShared/TriggerEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehicleStateTriggerEntityData : public GameShared::TriggerEntityData {
        Float32 LockAmount; // 0x70
        Uint32 SeatSpecificIndexForHuman; // 0x74
        Uint32 SeatSpecificIndexForAi; // 0x78
        Uint32 BulletCount; // 0x7C
        Uint32 HealthToSet; // 0x80
        Uint32 HealthToCheck; // 0x84
        Float32 DestructionRadius; // 0x88
        Boolean AllowHumanToEnterAllSeats; // 0x8C
        Boolean RestrictHumanToSpecificSeat; // 0x8D
        Boolean AllowAiToEnterAllSeats; // 0x8E
        Boolean BanAiFromSpecificSeat; // 0x8F
        Boolean TriggerCriticalOnHealthSet; // 0x90
        Boolean CheckHealthGreaterOrEqual; // 0x91
        Boolean RequirePlayerInVehicleToDestroyObjects; // 0x92
        Boolean ShouldDestroyVehicles; // 0x93
        Boolean ShouldDestroyBangers; // 0x94
        char pad_0x95[0xB];
    }; // 0xA0
    static_assert(sizeof(VehicleStateTriggerEntityData) == 0xA0);
}
#pragma pack(pop)