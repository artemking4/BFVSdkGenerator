// Object: LinkDebugEntityData
// ClassId: 2836
// RuntimeId: 51400
// TypeInfo: 0x0000000144E8F9E0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace GameShared {
    class LinkDebugEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 MaxResolvedLinkDebugs; // 0x24
        Uint32 ExpectedTargetDataCountInRuntime; // 0x28
        Uint32 ExpectedTargetInstanceCountInRuntime; // 0x2C
        Boolean PipelineTestEnabled; // 0x30
        Boolean TestOnInit; // 0x31
        Boolean ExpectAllTargetsToBeResolvableFromSource; // 0x32
        Boolean ExpectAllTargetsToBeInSameSubLevel; // 0x33
        Boolean ExpectAllTargetsToBeImmutable; // 0x34
        Boolean ExpectAllTargetsToBeDynamic; // 0x35
        char pad_0x36[0x2];
    }; // 0x38
    static_assert(sizeof(LinkDebugEntityData) == 0x38);
}
#pragma pack(pop)