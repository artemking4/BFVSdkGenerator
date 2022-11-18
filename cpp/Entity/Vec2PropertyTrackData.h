// Object: Vec2PropertyTrackData
// ClassId: 4545
// RuntimeId: 24283
// TypeInfo: 0x0000000144ED8370
#include "../Entity/SimplePropertyTrackData.h"
#include "../Core/Vec2.h"

#pragma pack(push, 8)
namespace Entity {
    class Vec2PropertyTrackData : public Entity::SimplePropertyTrackData {
        Array<Core::Vec2> Values; // 0x30
    }; // 0x38
    static_assert(sizeof(Vec2PropertyTrackData) == 0x38);
}
#pragma pack(pop)