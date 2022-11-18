// Object: IntPropertyTrackData
// ClassId: 4543
// RuntimeId: 20130
// TypeInfo: 0x0000000144ED8470
#include "../Entity/SimplePropertyTrackData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Entity {
    class IntPropertyTrackData : public Entity::SimplePropertyTrackData {
        Array<Int32> Values; // 0x30
    }; // 0x38
    static_assert(sizeof(IntPropertyTrackData) == 0x38);
}
#pragma pack(pop)