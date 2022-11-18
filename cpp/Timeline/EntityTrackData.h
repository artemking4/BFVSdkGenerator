// Object: EntityTrackData
// ClassId: 4011
// RuntimeId: 11182
// TypeInfo: 0x0000000144F646A0
#include "../Timeline/EntityTrackBaseData.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace Timeline {
    class EntityTrackData : public Timeline::EntityTrackBaseData {
        Array<Guid> GuidChain; // 0x40
    }; // 0x48
    static_assert(sizeof(EntityTrackData) == 0x48);
}
#pragma pack(pop)