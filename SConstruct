
import subprocess

def builder(target, source, env):
	path = env['make_path']
	cmd = 'make -C ' + path
	shell_env = dict()
	shell_env['PREFIX'] = Dir(env['T']).abspath
	shell_env['PATH'] = 'usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin'

	shell_exec = subprocess.Popen(cmd, bufsize = 0, env = shell_env, shell = True)
	return shell_exec.wait()

env = Environment(O = '#/output/debug/build', T = '#/output/debug/target')
env.Append(BUILDERS = { 'Make' : env.Builder(action = env.Action(builder)) })
env['AS'] = 'as86'
sub_folders = [ 'tools', 'src' ]
SConscript(dirs = sub_folders, exports = 'env')
env['ASCOM'] = 'cd $SOURCES.dir && $AS $ASFLAGS -o $TARGET.abspath $SOURCES.file'
print(env['defs_gen'])
