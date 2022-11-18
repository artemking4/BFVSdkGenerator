// Object: CustomSequenceTrackData
// ClassId: 2563
// RuntimeId: 7921
// TypeInfo: 0x0000000144ED87F0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Entity/CustomSequenceTrackLinkMapping.h"
#include "../Entity/CustomSequenceTrackEventMapping.h"
#include "../Entity/CustomSequenceTrackPropertyMapping.h"

#pragma pack(push, 8)
namespace Entity {
    class CustomSequenceTrackData : public Entity::EntityData {
        CString TrackName; // 0x20
        Array<Entity::CustomSequenceTrackLinkMapping> InputLinkMap; // 0x28
        Array<Entity::CustomSequenceTrackLinkMapping> OutputLinkMap; // 0x30
        Array<Entity::CustomSequenceTrackEventMapping> EventMap; // 0x38
        Array<Entity::CustomSequenceTrackPropertyMapping> SourcePropertyMap; // 0x40
        Array<Entity::CustomSequenceTrackPropertyMapping> TargetPropertyMap; // 0x48
        Array<Entity::CustomSequenceTrackPropertyMapping> SourceAndTargetPropertyMap; // 0x50
    }; // 0x58
    static_assert(sizeof(CustomSequenceTrackData) == 0x58);
}
#pragma pack(pop)