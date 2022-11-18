// Object: VertexShaderFragmentAsset
// ClassId: 907
// RuntimeId: 33548
// TypeInfo: 0x0000000144F1C500
#include "../Core/Asset.h"
#include "../Global/FileRef.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Render {
    class VertexShaderFragmentAsset : public Core::Asset {
        FileRef SourceFile; // 0x20
        CString Function; // 0x28
        CString PipelineGeneratedSourceCode; // 0x30
        Array<CString> ExtraInputFiles; // 0x38
    }; // 0x40
    static_assert(sizeof(VertexShaderFragmentAsset) == 0x40);
}
#pragma pack(pop)