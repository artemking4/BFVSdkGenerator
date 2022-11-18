// Object: FriendlyFireEntityData
// ClassId: 2772
// RuntimeId: 44597
// TypeInfo: 0x0000000144D09630
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FriendlyFireEntityData : public Entity::EntityData {
        Array<GameShared::TeamId> Teams; // 0x20
        Float32 EnemyCommitmentAllocation; // 0x28
        Float32 FriendlyCommitmentAllocation; // 0x2C
        Float32 MaxCommitment; // 0x30
        Float32 FailureThreshold; // 0x34
        Float32 DecayRate; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(FriendlyFireEntityData) == 0x40);
}
#pragma pack(pop)