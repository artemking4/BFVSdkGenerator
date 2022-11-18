// Object: DataSourceQueryEntityData
// ClassId: 2600
// RuntimeId: 50510
// TypeInfo: 0x0000000144F6DB40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class DataSourceQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Core::DataContainer InData; // 0x28
        Int32 ArrayIndex; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(DataSourceQueryEntityData) == 0x38);
}
#pragma pack(pop)