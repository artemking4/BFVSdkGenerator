// Object: SubWorldReferenceObjectData
// ClassId: 3982
// RuntimeId: 944
// TypeInfo: 0x0000000144EE6750
#include "../Entity/ReferenceObjectData.h"
#include "../Global/CString.h"
#include "../Entity/AdditionalSharedBundleLoadInfo.h"
#include "../Entity/BundleHeapInfo.h"
#include "../Entity/SubWorldInclusionSettings.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Entity {
    class SubWorldReferenceObjectData : public Entity::ReferenceObjectData {
        CString BundleName; // 0xB0
        Array<Entity::AdditionalSharedBundleLoadInfo> AdditionalSharedBundles; // 0xB8
        Array<CString> PreloadedBundleNames; // 0xC0
        Entity::BundleHeapInfo BundleHeap; // 0xC8
        char pad_0xD4[0x4];
        Entity::SubWorldInclusionSettings InclusionSettings; // 0xD8
        Boolean AutoLoad; // 0xE0
        Boolean IsWin32SubLevel; // 0xE1
        Boolean IsXenonSubLevel; // 0xE2
        Boolean IsPs3SubLevel; // 0xE3
        Boolean IsGen4aSubLevel; // 0xE4
        Boolean IsGen4bSubLevel; // 0xE5
        Boolean IsIOSSubLevel; // 0xE6
        Boolean IsAndroidSubLevel; // 0xE7
        Boolean IsOSXSubLevel; // 0xE8
        Boolean IsLinuxSubLevel; // 0xE9
        char pad_0xEA[0x6];
    }; // 0xF0
    static_assert(sizeof(SubWorldReferenceObjectData) == 0xF0);
}
#pragma pack(pop)