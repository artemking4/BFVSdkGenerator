// Object: ScaleVectorShapeEntityData
// ClassId: 1669
// RuntimeId: 56680
// TypeInfo: 0x0000000144C832C0
#include "../Entity/VolumeVectorShapeData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ScaleVectorShapeEntityData : public Entity::VolumeVectorShapeData {
        Core::Realm Realm; // 0x38
        Float32 Factor; // 0x3C
    }; // 0x40
    static_assert(sizeof(ScaleVectorShapeEntityData) == 0x40);
}
#pragma pack(pop)