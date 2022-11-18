// Object: DakarSyncedGameSettingOverrideEntityData
// ClassId: 2588
// RuntimeId: 294
// TypeInfo: 0x0000000144D669F0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarSyncedGameSettingOverrideEntityData : public Entity::EntityData {
        Int32 DifficultyIndex; // 0x20
        Boolean LocalVehicleSimulationEnabledForTowablesOnly; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(DakarSyncedGameSettingOverrideEntityData) == 0x28);
}
#pragma pack(pop)