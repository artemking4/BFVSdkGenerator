// Object: SequenceEntityData
// ClassId: 3154
// RuntimeId: 774
// TypeInfo: 0x0000000144ED8770
#include "../Entity/EntityData.h"
#include "../Entity/SequenceEventData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Core/Realm.h"
#include "../Entity/PropertyTrackData.h"
#include "../Entity/CustomSequenceTrackData.h"
#include "../Entity/UpdatePass.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class SequenceEntityData : public Entity::EntityData {
        Array<Entity::SequenceEventData> Events; // 0x20
        Int32 SequenceStartTime; // 0x28
        Int32 SequenceLength; // 0x2C
        Core::Realm Realm; // 0x30
        char pad_0x34[0x4];
        Array<Entity::PropertyTrackData> PropertyTracks; // 0x38
        Array<Entity::CustomSequenceTrackData> CustomSequenceTracks; // 0x40
        Entity::UpdatePass ClientUpdatePass; // 0x48
        Entity::UpdatePass ServerUpdatePass; // 0x4C
        Float32 ExternalTime; // 0x50
        Float32 PlaybackSpeed; // 0x54
        Boolean Looping; // 0x58
        Boolean AutoStart; // 0x59
        Boolean AutoPlayFirstFrame; // 0x5A
        Boolean PlayInReverse; // 0x5B
        Boolean UseRealTimeClock; // 0x5C
        char pad_0x5D[0x3];
    }; // 0x60
    static_assert(sizeof(SequenceEntityData) == 0x60);
}
#pragma pack(pop)