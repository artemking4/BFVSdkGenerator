// Object: TransformPropertyTrackData
// ClassId: 4544
// RuntimeId: 7323
// TypeInfo: 0x0000000144ED83F0
#include "../Entity/SimplePropertyTrackData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 8)
namespace Entity {
    class TransformPropertyTrackData : public Entity::SimplePropertyTrackData {
        Array<Core::LinearTransform> Values; // 0x30
    }; // 0x38
    static_assert(sizeof(TransformPropertyTrackData) == 0x38);
}
#pragma pack(pop)