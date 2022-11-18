// Object: StreamingGateEntityData
// ClassId: 3527
// RuntimeId: 42830
// TypeInfo: 0x0000000144E76640
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class StreamingGateEntityData : public Entity::EntityData {
        Float32 Timeout; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(StreamingGateEntityData) == 0x28);
}
#pragma pack(pop)