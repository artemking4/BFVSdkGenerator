// Object: SyncedSequenceEntityData
// ClassId: 3156
// RuntimeId: 48354
// TypeInfo: 0x0000000144E902E0
#include "../Entity/SequenceEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class SyncedSequenceEntityData : public Entity::SequenceEntityData {
        Boolean InterpolateTime; // 0x60
        char pad_0x61[0x7];
    }; // 0x68
    static_assert(sizeof(SyncedSequenceEntityData) == 0x68);
}
#pragma pack(pop)