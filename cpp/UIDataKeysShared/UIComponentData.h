// Object: UIComponentData
// ClassId: 429
// RuntimeId: 3979
// TypeInfo: 0x0000000144F68CE0
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../UIDataKeysShared/UIUpdateType.h"

#pragma pack(push, 8)
namespace UIDataKeysShared {
    class UIComponentData : public Core::DataContainerPolicyAsset {
        CString ShortName; // 0x20
        Array<CString> DataSources; // 0x28
        Int32 UpdatesPerSecond; // 0x30
        UIDataKeysShared::UIUpdateType UpdateType; // 0x34
    }; // 0x38
    static_assert(sizeof(UIComponentData) == 0x38);
}
#pragma pack(pop)