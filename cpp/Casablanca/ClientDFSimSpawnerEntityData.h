// Object: ClientDFSimSpawnerEntityData
// ClassId: 2478
// RuntimeId: 25858
// TypeInfo: 0x0000000144C1DA00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace Casablanca {
    class ClientDFSimSpawnerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform BoxTransform; // 0x30
        Core::Vec3 BoxHalfExtents; // 0x70
        Core::Vec3 DebugColor; // 0x80
        Float32 Interval; // 0x90
        Float32 Variance; // 0x94
        Int32 Count; // 0x98
        char pad_0x9C[0x4];
        CString DebugName; // 0xA0
        Boolean EnableOnCreation; // 0xA8
        Boolean ShowInWorldDebug; // 0xA9
        Boolean ShowDebugInfo; // 0xAA
        char pad_0xAB[0x5];
    }; // 0xB0
    static_assert(sizeof(ClientDFSimSpawnerEntityData) == 0xB0);
}
#pragma pack(pop)