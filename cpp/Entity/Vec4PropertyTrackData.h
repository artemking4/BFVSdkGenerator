// Object: Vec4PropertyTrackData
// ClassId: 4547
// RuntimeId: 28663
// TypeInfo: 0x0000000144ED8270
#include "../Entity/SimplePropertyTrackData.h"
#include "../Core/Vec4.h"

#pragma pack(push, 8)
namespace Entity {
    class Vec4PropertyTrackData : public Entity::SimplePropertyTrackData {
        Array<Core::Vec4> Values; // 0x30
    }; // 0x38
    static_assert(sizeof(Vec4PropertyTrackData) == 0x38);
}
#pragma pack(pop)