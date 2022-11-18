// Object: CableData
// ClassId: 2444
// RuntimeId: 55519
// TypeInfo: 0x0000000144C1AAC0
#include "../Entity/EntityData.h"
#include "../Cables/CableConnection.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Cables {
    class CableData : public Entity::EntityData {
        Array<Cables::CableConnection> CableConnections; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform MeshTransform; // 0x30
        Entity::ObjectBlueprint Blueprint; // 0x70
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(CableData) == 0x80);
}
#pragma pack(pop)