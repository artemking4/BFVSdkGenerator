// Object: BFSettings
// ClassId: 4963
// RuntimeId: 50196
// TypeInfo: 0x0000000144D31120
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSettings : public Core::SystemSettings {
        Int32 LatencyTestInterval; // 0x20
        Int32 SelectableMedalsCount; // 0x24
        Int32 WeatherSequencerStateOverride; // 0x28
        Boolean AllowAIClientBulletDamage; // 0x2C
        Boolean HandleAIInput; // 0x2D
        Boolean DisableIgnoreAllUnlocked; // 0x2E
        char pad_0x2F[0x1];
    }; // 0x30
    static_assert(sizeof(BFSettings) == 0x30);
}
#pragma pack(pop)