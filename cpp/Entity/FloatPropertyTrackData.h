// Object: FloatPropertyTrackData
// ClassId: 4542
// RuntimeId: 28367
// TypeInfo: 0x0000000144ED84F0
#include "../Entity/SimplePropertyTrackData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class FloatPropertyTrackData : public Entity::SimplePropertyTrackData {
        Array<Float32> Values; // 0x30
    }; // 0x38
    static_assert(sizeof(FloatPropertyTrackData) == 0x38);
}
#pragma pack(pop)