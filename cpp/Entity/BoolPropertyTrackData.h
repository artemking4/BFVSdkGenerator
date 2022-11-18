// Object: BoolPropertyTrackData
// ClassId: 4541
// RuntimeId: 32727
// TypeInfo: 0x0000000144ED8570
#include "../Entity/SimplePropertyTrackData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class BoolPropertyTrackData : public Entity::SimplePropertyTrackData {
        Array<Boolean> Values; // 0x30
    }; // 0x38
    static_assert(sizeof(BoolPropertyTrackData) == 0x38);
}
#pragma pack(pop)