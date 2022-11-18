// Object: LocalizedStringEntityBaseData
// ClassId: 2843
// RuntimeId: 39464
// TypeInfo: 0x0000000144F6E440
#include "../Entity/EntityData.h"
#include "../UIIncubatorShared/LocalizedStringArgumentType.h"
#include "../Global/Uint32.h"

namespace UIIncubatorShared {
    class LocalizedStringEntityBaseData : public Entity::EntityData {
        Array<UIIncubatorShared::LocalizedStringArgumentType> Arguments; // 0x20
        Array<Uint32> ArgumentHashes; // 0x28
    }; // 0x30
    static_assert(sizeof(LocalizedStringEntityBaseData) == 0x30);
}