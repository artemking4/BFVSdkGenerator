// Object: EntityBusData
// ClassId: 248
// RuntimeId: 38238
// TypeInfo: 0x0000000144ED7F70
#include "../Core/DataBusData.h"
#include "../Entity/EventConnection.h"

namespace Entity {
    class EntityBusData : public Core::DataBusData {
        Array<Entity::EventConnection> EventConnections; // 0x40
    }; // 0x48
    static_assert(sizeof(EntityBusData) == 0x48);
}