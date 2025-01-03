project('TrapCoinXD', 'cpp',
        version : '1.0.0',
        default_options : [
                'warning_level=3',
                'cpp_std=c++20'
        ]
)

sources = run_command('find', 'src', '-name', '*.cpp').stdout().strip().split('\n')

dependencies = [
        dependency('libpqxx'),
        dependency('libpistache')
]

TrapCoinXD = executable(
        'TrapCoinXD',
        sources,
        install : true,
        dependencies: dependencies
)

test('test', TrapCoinXD)
