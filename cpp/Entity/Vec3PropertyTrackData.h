// Object: Vec3PropertyTrackData
// ClassId: 4546
// RuntimeId: 48902
// TypeInfo: 0x0000000144ED82F0
#include "../Entity/SimplePropertyTrackData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 8)
namespace Entity {
    class Vec3PropertyTrackData : public Entity::SimplePropertyTrackData {
        Array<Core::Vec3> Values; // 0x30
    }; // 0x38
    static_assert(sizeof(Vec3PropertyTrackData) == 0x38);
}
#pragma pack(pop)