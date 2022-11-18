// Object: BFStringBuilderEntityData
// ClassId: 2148
// RuntimeId: 2540
// TypeInfo: 0x0000000144C312F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Casablanca/StringBuilderInputEntry.h"
#include "../Casablanca/StringBuilderOutputType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFStringBuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<Casablanca::StringBuilderInputEntry> Inputs; // 0x28
        Casablanca::StringBuilderOutputType OutputType; // 0x30
        Boolean UpdateAutomatically; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(BFStringBuilderEntityData) == 0x38);
}
#pragma pack(pop)