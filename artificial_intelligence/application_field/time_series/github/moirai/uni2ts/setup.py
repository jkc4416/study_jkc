from setuptools import setup, find_packages

setup(
    name="uni2ts",
    version="0.1.0",  # dynamic version 설정이 있었으므로, 직접 설정하거나 스크립트로 동적으로 관리해야 합니다.
    description="Unified Training of Universal Time Series Forecasting Transformers",
    long_description=open("README.md").read(),
    long_description_content_type="text/markdown",
    author="Gerald Woo, Chenghao Liu, Akshat Kumar, Caiming Xiong, Silvio Savarese, Doyen Sahoo",
    author_email="gwoo@salesforce.com",
    maintainer="Gerald Woo, Juncheng Liu",
    maintainer_email="gwoo@salesforce.com, juncheng.liu@salesforce.com",
    license="MIT",  # LICENSE.txt 파일에 대한 라이선스는 명시되지 않았으므로 MIT로 가정
    license_files=["LICENSE.txt"],
    keywords=["Time Series Forecasting", "Transformer", "Deep Learning", "PyTorch"],
    classifiers=[
        "Development Status :: 3 - Alpha",
        "Programming Language :: Python",
        "Programming Language :: Python :: 3.10",
        "Topic :: Scientific/Engineering :: Artificial Intelligence",
    ],
    python_requires=">=3.10",
    packages=find_packages(where="src"),
    package_dir={"": "src"},
    install_requires=[
        "torch>=2.1",
        "lightning>=2.0",
        "gluonts~=0.14.3",
        "numpy~=1.26.0",
        "scipy~=1.11.3",
        "einops==0.7.*",
        "jaxtyping~=0.2.24",
        "python-dotenv==1.0.0",
        "hydra-core==1.3",
        "orjson",
        "tensorboard",
        "multiprocess",
        "huggingface_hub>=0.23.0",
        "safetensors",
        "datasets~=2.17.1",
        "jax[cpu]",
    ],
    extras_require={
        "dev": [
            "pytest==7.4.3",
            "pytest_timeout==2.2.0",
            "hatch",
            "black[jupyter]==24.2.0",
            "isort",
            "pre-commit",
        ],
        "notebook": [
            "jupyter",
            "ipywidgets",
            "matplotlib",
        ],
        "build-lotsa": [
            "buildings_bench",
            "pyreadr",
            "tables",
            "subseasonal-data",
        ]
    },
    include_package_data=True,  # MANIFEST.in 파일이 있을 경우 사용
)
