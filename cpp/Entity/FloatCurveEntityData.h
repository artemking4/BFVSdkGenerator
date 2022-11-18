// Object: FloatCurveEntityData
// ClassId: 2749
// RuntimeId: 37461
// TypeInfo: 0x0000000144EE3D50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/FloatCurve.h"

#pragma pack(push, 8)
namespace Entity {
    class FloatCurveEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 In; // 0x24
        Core::FloatCurve Curve; // 0x28
        Boolean OutputIntegral; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(FloatCurveEntityData) == 0x38);
}
#pragma pack(pop)