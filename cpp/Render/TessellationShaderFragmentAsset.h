// Object: TessellationShaderFragmentAsset
// ClassId: 801
// RuntimeId: 1037
// TypeInfo: 0x0000000144F1C480
#include "../Core/Asset.h"
#include "../Global/FileRef.h"
#include "../Global/CString.h"
#include "../Render/TessellationShaderFragmentDefinition.h"

#pragma pack(push, 8)
namespace Render {
    class TessellationShaderFragmentAsset : public Core::Asset {
        FileRef SourceFile; // 0x20
        CString HSControlPointFunctionName; // 0x28
        CString HSPatchConstantFunctionName; // 0x30
        CString DSFunctionName; // 0x38
        CString VSOutputStructName; // 0x40
        CString HSControlPointOutputStructName; // 0x48
        CString HSPatchConstantOutputStructName; // 0x50
        CString DSOutputStructName; // 0x58
        Array<Render::TessellationShaderFragmentDefinition> Definitions; // 0x60
    }; // 0x68
    static_assert(sizeof(TessellationShaderFragmentAsset) == 0x68);
}
#pragma pack(pop)