// Object: SpectatorChainEntityData
// ClassId: 3493
// RuntimeId: 3548
// TypeInfo: 0x0000000144D50550
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpectatorChainEntityData : public Entity::EntityData {
        Float32 SwitchDelay; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(SpectatorChainEntityData) == 0x28);
}
#pragma pack(pop)